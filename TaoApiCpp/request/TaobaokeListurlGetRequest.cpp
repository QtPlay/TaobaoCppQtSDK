#include <TaoApiCpp/request/TaobaokeListurlGetRequest.h>

QString TaobaokeListurlGetRequest::getApiMethodName() const {
  return "taobao.taobaoke.listurl.get";
}

QString TaobaokeListurlGetRequest::getNick() const {
  return nick;
}
void TaobaokeListurlGetRequest::setNick (QString nick) {
  this->nick = nick;
  appParams.insert("nick", nick);
}

QString TaobaokeListurlGetRequest::getOuterCode() const {
  return outerCode;
}
void TaobaokeListurlGetRequest::setOuterCode (QString outerCode) {
  this->outerCode = outerCode;
  appParams.insert("outer_code", outerCode);
}

qlonglong TaobaokeListurlGetRequest::getPid() const {
  return pid;
}
void TaobaokeListurlGetRequest::setPid (qlonglong pid) {
  this->pid = pid;
  appParams.insert("pid", QString::number(pid));
}

QString TaobaokeListurlGetRequest::getQ() const {
  return q;
}
void TaobaokeListurlGetRequest::setQ (QString q) {
  this->q = q;
  appParams.insert("q", q);
}



TaobaokeListurlGetResponse *TaobaokeListurlGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  TaobaokeListurlGetResponse *tmpResponse = new TaobaokeListurlGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
