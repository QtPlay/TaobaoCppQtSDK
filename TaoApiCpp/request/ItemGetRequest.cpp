#include <TaoApiCpp/request/ItemGetRequest.h>

QString ItemGetRequest::getApiMethodName() const {
  return "taobao.item.get";
}

QString ItemGetRequest::getFields() const {
  return fields;
}
void ItemGetRequest::setFields (QString fields) {
  this->fields = fields;
  appParams.insert("fields", fields);
}

qlonglong ItemGetRequest::getNumIid() const {
  return numIid;
}
void ItemGetRequest::setNumIid (qlonglong numIid) {
  this->numIid = numIid;
  appParams.insert("num_iid", QString::number(numIid));
}

QString ItemGetRequest::getTrackIid() const {
  return trackIid;
}
void ItemGetRequest::setTrackIid (QString trackIid) {
  this->trackIid = trackIid;
  appParams.insert("track_iid", trackIid);
}



ItemGetResponse *ItemGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  ItemGetResponse *tmpResponse = new ItemGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
