#include <TaoApiCpp/request/TradeMemoUpdateRequest.h>

QString TradeMemoUpdateRequest::getApiMethodName() const {
  return "taobao.trade.memo.update";
}

qlonglong TradeMemoUpdateRequest::getFlag() const {
  return flag;
}
void TradeMemoUpdateRequest::setFlag (qlonglong flag) {
  this->flag = flag;
  appParams.insert("flag", QString::number(flag));
}

QString TradeMemoUpdateRequest::getMemo() const {
  return memo;
}
void TradeMemoUpdateRequest::setMemo (QString memo) {
  this->memo = memo;
  appParams.insert("memo", memo);
}

bool TradeMemoUpdateRequest::getReset() const {
  return reset;
}
void TradeMemoUpdateRequest::setReset (bool reset) {
  this->reset = reset;
  appParams.insert("reset", reset? "true": "false");
}

qlonglong TradeMemoUpdateRequest::getTid() const {
  return tid;
}
void TradeMemoUpdateRequest::setTid (qlonglong tid) {
  this->tid = tid;
  appParams.insert("tid", QString::number(tid));
}



TradeMemoUpdateResponse *TradeMemoUpdateRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  TradeMemoUpdateResponse *tmpResponse = new TradeMemoUpdateResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
