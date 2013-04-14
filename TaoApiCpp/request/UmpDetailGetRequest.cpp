#include <TaoApiCpp/request/UmpDetailGetRequest.h>

QString UmpDetailGetRequest::getApiMethodName() const {
  return "taobao.ump.detail.get";
}

qlonglong UmpDetailGetRequest::getDetailId() const {
  return detailId;
}
void UmpDetailGetRequest::setDetailId (qlonglong detailId) {
  this->detailId = detailId;
  appParams.insert("detail_id", QString::number(detailId));
}



UmpDetailGetResponse *UmpDetailGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  UmpDetailGetResponse *tmpResponse = new UmpDetailGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
