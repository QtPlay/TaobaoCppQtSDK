#include <TaoApiCpp/request/WidgetLoginstatusGetRequest.h>

QString WidgetLoginstatusGetRequest::getApiMethodName() const {
  return "taobao.widget.loginstatus.get";
}

QString WidgetLoginstatusGetRequest::getNick() const {
  return nick;
}
void WidgetLoginstatusGetRequest::setNick (QString nick) {
  this->nick = nick;
  appParams.insert("nick", nick);
}



WidgetLoginstatusGetResponse *WidgetLoginstatusGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  WidgetLoginstatusGetResponse *tmpResponse = new WidgetLoginstatusGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
