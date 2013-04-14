#include <TaoApiCpp/request/TradeMemoAddRequest.h>

QString TradeMemoAddRequest::getApiMethodName() const {
  return "taobao.trade.memo.add";
}

qlonglong TradeMemoAddRequest::getFlag() const {
  return flag;
}
void TradeMemoAddRequest::setFlag (qlonglong flag) {
  this->flag = flag;
  appParams.insert("flag", QString::number(flag));
}

QString TradeMemoAddRequest::getMemo() const {
  return memo;
}
void TradeMemoAddRequest::setMemo (QString memo) {
  this->memo = memo;
  appParams.insert("memo", memo);
}

qlonglong TradeMemoAddRequest::getTid() const {
  return tid;
}
void TradeMemoAddRequest::setTid (qlonglong tid) {
  this->tid = tid;
  appParams.insert("tid", QString::number(tid));
}



TradeMemoAddResponse *TradeMemoAddRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  TradeMemoAddResponse *tmpResponse = new TradeMemoAddResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
