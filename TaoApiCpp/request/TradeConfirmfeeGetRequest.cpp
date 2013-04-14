#include <TaoApiCpp/request/TradeConfirmfeeGetRequest.h>

QString TradeConfirmfeeGetRequest::getApiMethodName() const {
  return "taobao.trade.confirmfee.get";
}

QString TradeConfirmfeeGetRequest::getIsDetail() const {
  return isDetail;
}
void TradeConfirmfeeGetRequest::setIsDetail (QString isDetail) {
  this->isDetail = isDetail;
  appParams.insert("is_detail", isDetail);
}

qlonglong TradeConfirmfeeGetRequest::getTid() const {
  return tid;
}
void TradeConfirmfeeGetRequest::setTid (qlonglong tid) {
  this->tid = tid;
  appParams.insert("tid", QString::number(tid));
}



TradeConfirmfeeGetResponse *TradeConfirmfeeGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  TradeConfirmfeeGetResponse *tmpResponse = new TradeConfirmfeeGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
