
#ifndef BETHPRIMER_EXERCISE_12_2_H
#define BETHPRIMER_EXERCISE_12_2_H

#include <iostream>
#include <vector>

using namespace std;

class StrBlobPtr;

class ConstStrBlobPtr;

class StrBlob {
    friend bool operator==(const StrBlob &lhs, const StrBlob &rhs);

    friend bool operator!=(const StrBlob &lhs, const StrBlob &rhs);

    friend bool operator>(const StrBlob &lhs, const StrBlob &rhs);

    friend bool operator<(const StrBlob &lhs, const StrBlob &rhs);

    friend bool operator>=(const StrBlob &lhs, const StrBlob &rhs);

    friend bool operator<=(const StrBlob &lhs, const StrBlob &rhs);

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

    StrBlob(StrBlob &&sb) noexcept: data(std::move(sb.data)) {}

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

    string &operator[](size_t index) {
        check(index, "out of range!");
        return data->at(index);
    }

    const string &operator[](size_t index) const {
        check(index, "out of range!");
        return data->at(index);
    }

private:
    void check(size_type i, const string &msg) const {
        if (i >= data->size()) throw out_of_range(msg);
    }

private:
    shared_ptr<vector<string>> data;
};

bool operator==(const StrBlob &lhs, const StrBlob &rhs);

bool operator!=(const StrBlob &lhs, const StrBlob &rhs);

bool operator>(const StrBlob &lhs, const StrBlob &rhs);

bool operator<(const StrBlob &lhs, const StrBlob &rhs);

bool operator>=(const StrBlob &lhs, const StrBlob &rhs);

bool operator<=(const StrBlob &lhs, const StrBlob &rhs);


class StrBlobPtr {
    friend bool operator==(const StrBlobPtr &lhs, const StrBlobPtr &rhs);

    friend bool operator!=(const StrBlobPtr &lhs, const StrBlobPtr &rhs);

    friend bool operator>(const StrBlobPtr &lhs, const StrBlobPtr &rhs);

    friend bool operator<(const StrBlobPtr &lhs, const StrBlobPtr &rhs);

    friend bool operator>=(const StrBlobPtr &lhs, const StrBlobPtr &rhs);

    friend bool operator<=(const StrBlobPtr &lhs, const StrBlobPtr &rhs);

public:
    StrBlobPtr() : cur(0) {};

    StrBlobPtr(StrBlob &s, size_t sz = 0) : wptr(s.data), cur(sz) {};

    string &deref() const {
        auto p = check(cur, "dereference past end");
        return (*p)[cur];
    }

    StrBlobPtr &incr() {
        check(cur, "increment past end of StrBlobPtr");
        ++cur;
        return *this;
    }

    string &operator[](size_t index) {
        auto p = check(index, "dereference out of range!");
        return (*p)[index];
    }

    const string &operator[](size_t index) const {
        auto p = check(index, "dereference out of range!");
        return (*p)[index];
    }

    StrBlobPtr &operator++() {
        check(cur, "increment past end of StrBlobPtr");
        ++cur;
        return *this;
    }

    StrBlobPtr &operator--() {
        check(--cur, "increment past begin of StrBlobPtr");
        --cur;
        return *this;
    }

    StrBlobPtr operator++(int) {
        StrBlobPtr ret = *this;
        ++*this;
        return ret;
    }

    StrBlobPtr operator--(int) {
        StrBlobPtr ret = *this;
        --*this;
        return ret;
    }

    StrBlobPtr &operator+=(size_t n) {
        cur += n;
        check(cur, "increment past end of StrBlobPtr");
        return *this;
    }

    StrBlobPtr &operator-=(size_t n) {
        cur -= n;
        check(cur, "increment past begin of StrBlobPtr");
        return *this;
    }

    StrBlobPtr operator+(size_t n) const {
        StrBlobPtr ret = *this;
        ret += n;
        return ret;
    }

    StrBlobPtr operator-(size_t n) const {
        StrBlobPtr ret = *this;
        ret -= n;
        return ret;
    }

    string &operator*() {
        auto p = check(cur, "dereference past end");
        return (*p)[cur];
    }

    string *operator->() {
        return &this->operator*();
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

bool operator==(const StrBlobPtr &lhs, const StrBlobPtr &rhs);

bool operator!=(const StrBlobPtr &lhs, const StrBlobPtr &rhs);

bool operator>(const StrBlobPtr &lhs, const StrBlobPtr &rhs);

bool operator<(const StrBlobPtr &lhs, const StrBlobPtr &rhs);

bool operator>=(const StrBlobPtr &lhs, const StrBlobPtr &rhs);

bool operator<=(const StrBlobPtr &lhs, const StrBlobPtr &rhs);

class ConstStrBlobPtr {
    friend bool operator==(const ConstStrBlobPtr &lhs, const ConstStrBlobPtr &rhs);

    friend bool operator!=(const ConstStrBlobPtr &lhs, const ConstStrBlobPtr &rhs);

    friend bool operator>(const ConstStrBlobPtr &lhs, const ConstStrBlobPtr &rhs);

    friend bool operator<(const ConstStrBlobPtr &lhs, const ConstStrBlobPtr &rhs);

    friend bool operator>=(const ConstStrBlobPtr &lhs, const ConstStrBlobPtr &rhs);

    friend bool operator<=(const ConstStrBlobPtr &lhs, const ConstStrBlobPtr &rhs);

public:
    ConstStrBlobPtr() : cur(0) {};

    ConstStrBlobPtr(const StrBlob &s, size_t sz = 0) : wptr(s.data), cur(sz) {};

    string &deref() const {
        auto p = check(cur, "dereference past end");
        return (*p)[cur];
    }

    ConstStrBlobPtr &incr() {
        check(cur, "increment past end of StrBlobPtr");
        ++cur;
        return *this;
    }

    const string &operator[](size_t index) const {
        auto p = check(index, "dereference out of range!");
        return (*p)[index];
    }

    ConstStrBlobPtr &operator++() {
        check(cur, "increment past end of ConstStrBlobPtr");
        ++cur;
        return *this;
    }

    ConstStrBlobPtr &operator--() {
        check(--cur, "increment past begin of ConstStrBlobPtr");
        return *this;
    }

    ConstStrBlobPtr operator++(int) {
        ConstStrBlobPtr ret = *this;
        ++*this;
        return ret;
    }

    ConstStrBlobPtr operator--(int) {
        ConstStrBlobPtr ret = *this;
        --*this;
        return ret;
    }

    ConstStrBlobPtr &operator+=(size_t n) {
        cur += n;
        check(cur, "increment past end of StrBlobPtr");
        return *this;
    }

    ConstStrBlobPtr &operator-=(size_t n) {
        cur -= n;
        check(cur, "increment past begin of StrBlobPtr");
        return *this;
    }

    ConstStrBlobPtr operator+(size_t n) const {
        ConstStrBlobPtr ret = *this;
        ret += n;
        return ret;
    }

    ConstStrBlobPtr operator-(size_t n) const {
        ConstStrBlobPtr ret = *this;
        ret -= n;
        return ret;
    }

    const string &operator*() const {
        auto p = check(cur, "dereference past end");
        return (*p)[cur];
    }

    const string *operator->() const {
        return &this->operator*();
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

bool operator==(const ConstStrBlobPtr &lhs, const ConstStrBlobPtr &rhs);

bool operator!=(const ConstStrBlobPtr &lhs, const ConstStrBlobPtr &rhs);

bool operator>(const ConstStrBlobPtr &lhs, const ConstStrBlobPtr &rhs);

bool operator<(const ConstStrBlobPtr &lhs, const ConstStrBlobPtr &rhs);

bool operator>=(const ConstStrBlobPtr &lhs, const ConstStrBlobPtr &rhs);

bool operator<=(const ConstStrBlobPtr &lhs, const ConstStrBlobPtr &rhs);

#endif //BETHPRIMER_EXERCISE_12_2_H
