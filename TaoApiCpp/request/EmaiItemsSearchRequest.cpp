#include <TaoApiCpp/request/EmaiItemsSearchRequest.h>

QString EmaiItemsSearchRequest::getApiMethodName() const {
  return "tmall.temai.items.search";
}

qlonglong EmaiItemsSearchRequest::getCat() const {
  return cat;
}
void EmaiItemsSearchRequest::setCat (qlonglong cat) {
  this->cat = cat;
  appParams.insert("cat", QString::number(cat));
}

QString EmaiItemsSearchRequest::getSort() const {
  return sort;
}
void EmaiItemsSearchRequest::setSort (QString sort) {
  this->sort = sort;
  appParams.insert("sort", sort);
}

qlonglong EmaiItemsSearchRequest::getStart() const {
  return start;
}
void EmaiItemsSearchRequest::setStart (qlonglong start) {
  this->start = start;
  appParams.insert("start", QString::number(start));
}



EmaiItemsSearchResponse *EmaiItemsSearchRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  EmaiItemsSearchResponse *tmpResponse = new EmaiItemsSearchResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
