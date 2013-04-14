#include <TaoApiCpp/request/FuwuSaleLinkGenRequest.h>

QString FuwuSaleLinkGenRequest::getApiMethodName() const {
  return "taobao.fuwu.sale.link.gen";
}

QString FuwuSaleLinkGenRequest::getNick() const {
  return nick;
}
void FuwuSaleLinkGenRequest::setNick (QString nick) {
  this->nick = nick;
  appParams.insert("nick", nick);
}

QString FuwuSaleLinkGenRequest::getParamStr() const {
  return paramStr;
}
void FuwuSaleLinkGenRequest::setParamStr (QString paramStr) {
  this->paramStr = paramStr;
  appParams.insert("param_str", paramStr);
}



FuwuSaleLinkGenResponse *FuwuSaleLinkGenRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  FuwuSaleLinkGenResponse *tmpResponse = new FuwuSaleLinkGenResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
