#include <TaoApiCpp/request/ItemUpdateDelistingRequest.h>

QString ItemUpdateDelistingRequest::getApiMethodName() const {
  return "taobao.item.update.delisting";
}

qlonglong ItemUpdateDelistingRequest::getNumIid() const {
  return numIid;
}
void ItemUpdateDelistingRequest::setNumIid (qlonglong numIid) {
  this->numIid = numIid;
  appParams.insert("num_iid", QString::number(numIid));
}



ItemUpdateDelistingResponse *ItemUpdateDelistingRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  ItemUpdateDelistingResponse *tmpResponse = new ItemUpdateDelistingResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
