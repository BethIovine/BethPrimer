
#ifndef BETHPRIMER_EXERCISE_12_2_H
#define BETHPRIMER_EXERCISE_12_2_H

#include <iostream>
#include <vector>

using namespace std;

class StrBlobPtr;

class ConstStrBlobPtr;

class StrBlob {

public:
    using size_type = vector<string>::size_type;

    friend class StrBlobPtr;

    friend class ConstStrBlobPtr;

    StrBlobPtr begin();

    StrBlobPtr end();

    ConstStrBlobPtr cbegin() const;

    ConstStrBlobPtr cend() const;

    StrBlob() : data(make_shared<vector<string>>()) {}

    StrBlob(initializer_list<string> il) : data(make_shared<vector<string>>(il)) {}

    StrBlob(const StrBlob &sb) : data(make_shared<vector<string>>(*sb.data)) {}

    StrBlob &operator=(const StrBlob &sb);

    size_type size() const { return data->size(); }

    bool empty() const { return data->empty(); }

    void push_back(const string &d) {
        data->push_back(d);
    }

    void pop_back() {
        check(0, "pop back on empty data!");
        data->pop_back();
    }

    string &front() {
        check(0, "front on empty data!");
        return data->front();
    }

    string &back() {
        check(0, "back on empty data!");
        return data->back();
    }

    const string &front() const {
        check(0, "front on empty data!");
        return data->front();
    }

    const string &back() const {
        check(0, "back on empty data!");
        return data->back();
    }

private:
    void check(size_type i, const string &msg) const {
        if (i >= data->size()) throw out_of_range(msg);
    }

private:
    shared_ptr<vector<string>> data;
};

class StrBlobPtr {
public:
    StrBlobPtr() : cur(0) {};

    StrBlobPtr(StrBlob &s, size_t sz = 0) : wptr(s.data), cur(sz) {};

    bool operator!=(const StrBlobPtr &p) const { return p.cur != cur; }

    string &deref() const {
        auto p = check(cur, "dereference past end");
        return (*p)[cur];
    }

    StrBlobPtr &incr() {
        check(cur, "increment past end of StrBlobPtr");
        ++cur;
        return *this;
    }

private:
    shared_ptr<vector<string>> check(size_t i, const string &msg) const {
        auto p = wptr.lock();
        if (!p) throw runtime_error("unbound StrBlobPtr!");
        if (i >= p->size()) throw out_of_range(msg);
        return p;
    }

    weak_ptr<vector<string>> wptr;
    size_t cur;
};

class ConstStrBlobPtr {
public:
    ConstStrBlobPtr() : cur(0) {};

    ConstStrBlobPtr(const StrBlob &s, size_t sz = 0) : wptr(s.data), cur(sz) {};

    bool operator!=(const ConstStrBlobPtr &p) const { return p.cur != cur; }

    string &deref() const {
        auto p = check(cur, "dereference past end");
        return (*p)[cur];
    }

    ConstStrBlobPtr &incr() {
        check(cur, "increment past end of StrBlobPtr");
        ++cur;
        return *this;
    }

private:
    shared_ptr<vector<string>> check(size_t i, const string &msg) const {
        auto p = wptr.lock();
        if (!p) throw runtime_error("unbound StrBlobPtr!");
        if (i >= p->size()) throw out_of_range(msg);
        return p;
    }

    weak_ptr<vector<string>> wptr;
    size_t cur;
};


#endif //BETHPRIMER_EXERCISE_12_2_H
