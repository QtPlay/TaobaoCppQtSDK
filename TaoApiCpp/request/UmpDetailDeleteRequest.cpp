#include <TaoApiCpp/request/UmpDetailDeleteRequest.h>

QString UmpDetailDeleteRequest::getApiMethodName() const {
  return "taobao.ump.detail.delete";
}

qlonglong UmpDetailDeleteRequest::getDetailId() const {
  return detailId;
}
void UmpDetailDeleteRequest::setDetailId (qlonglong detailId) {
  this->detailId = detailId;
  appParams.insert("detail_id", QString::number(detailId));
}



UmpDetailDeleteResponse *UmpDetailDeleteRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  UmpDetailDeleteResponse *tmpResponse = new UmpDetailDeleteResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
