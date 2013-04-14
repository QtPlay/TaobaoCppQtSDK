#include <TaoApiCpp/request/UmpDetailUpdateRequest.h>

QString UmpDetailUpdateRequest::getApiMethodName() const {
  return "taobao.ump.detail.update";
}

QString UmpDetailUpdateRequest::getContent() const {
  return content;
}
void UmpDetailUpdateRequest::setContent (QString content) {
  this->content = content;
  appParams.insert("content", content);
}

qlonglong UmpDetailUpdateRequest::getDetailId() const {
  return detailId;
}
void UmpDetailUpdateRequest::setDetailId (qlonglong detailId) {
  this->detailId = detailId;
  appParams.insert("detail_id", QString::number(detailId));
}



UmpDetailUpdateResponse *UmpDetailUpdateRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  UmpDetailUpdateResponse *tmpResponse = new UmpDetailUpdateResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
