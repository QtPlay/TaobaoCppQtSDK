#include <TaoApiCpp/request/ItemsListGetRequest.h>

QString ItemsListGetRequest::getApiMethodName() const {
  return "taobao.items.list.get";
}

QString ItemsListGetRequest::getFields() const {
  return fields;
}
void ItemsListGetRequest::setFields (QString fields) {
  this->fields = fields;
  appParams.insert("fields", fields);
}

QString ItemsListGetRequest::getNumIids() const {
  return numIids;
}
void ItemsListGetRequest::setNumIids (QString numIids) {
  this->numIids = numIids;
  appParams.insert("num_iids", numIids);
}

QString ItemsListGetRequest::getTrackIids() const {
  return trackIids;
}
void ItemsListGetRequest::setTrackIids (QString trackIids) {
  this->trackIids = trackIids;
  appParams.insert("track_iids", trackIids);
}



ItemsListGetResponse *ItemsListGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  ItemsListGetResponse *tmpResponse = new ItemsListGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
