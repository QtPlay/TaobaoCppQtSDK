#include <TaoApiCpp/request/TradePostageUpdateRequest.h>

QString TradePostageUpdateRequest::getApiMethodName() const {
  return "taobao.trade.postage.update";
}

QString TradePostageUpdateRequest::getPostFee() const {
  return postFee;
}
void TradePostageUpdateRequest::setPostFee (QString postFee) {
  this->postFee = postFee;
  appParams.insert("post_fee", postFee);
}

qlonglong TradePostageUpdateRequest::getTid() const {
  return tid;
}
void TradePostageUpdateRequest::setTid (qlonglong tid) {
  this->tid = tid;
  appParams.insert("tid", QString::number(tid));
}



TradePostageUpdateResponse *TradePostageUpdateRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  TradePostageUpdateResponse *tmpResponse = new TradePostageUpdateResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
