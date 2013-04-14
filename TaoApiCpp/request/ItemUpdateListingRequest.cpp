#include <TaoApiCpp/request/ItemUpdateListingRequest.h>

QString ItemUpdateListingRequest::getApiMethodName() const {
  return "taobao.item.update.listing";
}

qlonglong ItemUpdateListingRequest::getNum() const {
  return num;
}
void ItemUpdateListingRequest::setNum (qlonglong num) {
  this->num = num;
  appParams.insert("num", QString::number(num));
}

qlonglong ItemUpdateListingRequest::getNumIid() const {
  return numIid;
}
void ItemUpdateListingRequest::setNumIid (qlonglong numIid) {
  this->numIid = numIid;
  appParams.insert("num_iid", QString::number(numIid));
}



ItemUpdateListingResponse *ItemUpdateListingRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  ItemUpdateListingResponse *tmpResponse = new ItemUpdateListingResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
