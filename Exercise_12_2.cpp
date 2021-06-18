#include "Exercise_12_2.h"

StrBlobPtr StrBlob::begin() {
    return StrBlobPtr(*this);
}

StrBlobPtr StrBlob::end() {
    return StrBlobPtr(*this, data->size());
}

ConstStrBlobPtr StrBlob::cbegin() const {
    return ConstStrBlobPtr(*this);
}

ConstStrBlobPtr StrBlob::cend() const {
    return ConstStrBlobPtr(*this, data->size());
}

StrBlob &StrBlob::operator=(const StrBlob &sb) {
    data = make_shared<vector<string>>(*sb.data);
    return *this;
}