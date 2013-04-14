#include <TaoApiCpp/request/TravelItemsareaGetRequest.h>

QString TravelItemsareaGetRequest::getApiMethodName() const {
  return "taobao.travel.itemsarea.get";
}

qlonglong TravelItemsareaGetRequest::getCid() const {
  return cid;
}
void TravelItemsareaGetRequest::setCid (qlonglong cid) {
  this->cid = cid;
  appParams.insert("cid", QString::number(cid));
}



TravelItemsareaGetResponse *TravelItemsareaGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  TravelItemsareaGetResponse *tmpResponse = new TravelItemsareaGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
