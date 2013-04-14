#include <TaoApiCpp/request/ItemcatsGetRequest.h>

QString ItemcatsGetRequest::getApiMethodName() const {
  return "taobao.itemcats.get";
}

qlonglong ItemcatsGetRequest::getCids() const {
  return cids;
}
void ItemcatsGetRequest::setCids (qlonglong cids) {
  this->cids = cids;
  appParams.insert("cids", QString::number(cids));
}

QString ItemcatsGetRequest::getFields() const {
  return fields;
}
void ItemcatsGetRequest::setFields (QString fields) {
  this->fields = fields;
  appParams.insert("fields", fields);
}

qlonglong ItemcatsGetRequest::getParentCid() const {
  return parentCid;
}
void ItemcatsGetRequest::setParentCid (qlonglong parentCid) {
  this->parentCid = parentCid;
  appParams.insert("parent_cid", QString::number(parentCid));
}



ItemcatsGetResponse *ItemcatsGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  ItemcatsGetResponse *tmpResponse = new ItemcatsGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
