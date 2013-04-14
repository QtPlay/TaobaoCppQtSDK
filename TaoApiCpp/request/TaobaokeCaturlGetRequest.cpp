#include <TaoApiCpp/request/TaobaokeCaturlGetRequest.h>

QString TaobaokeCaturlGetRequest::getApiMethodName() const {
  return "taobao.taobaoke.caturl.get";
}

qlonglong TaobaokeCaturlGetRequest::getCid() const {
  return cid;
}
void TaobaokeCaturlGetRequest::setCid (qlonglong cid) {
  this->cid = cid;
  appParams.insert("cid", QString::number(cid));
}

QString TaobaokeCaturlGetRequest::getNick() const {
  return nick;
}
void TaobaokeCaturlGetRequest::setNick (QString nick) {
  this->nick = nick;
  appParams.insert("nick", nick);
}

QString TaobaokeCaturlGetRequest::getOuterCode() const {
  return outerCode;
}
void TaobaokeCaturlGetRequest::setOuterCode (QString outerCode) {
  this->outerCode = outerCode;
  appParams.insert("outer_code", outerCode);
}

qlonglong TaobaokeCaturlGetRequest::getPid() const {
  return pid;
}
void TaobaokeCaturlGetRequest::setPid (qlonglong pid) {
  this->pid = pid;
  appParams.insert("pid", QString::number(pid));
}

QString TaobaokeCaturlGetRequest::getQ() const {
  return q;
}
void TaobaokeCaturlGetRequest::setQ (QString q) {
  this->q = q;
  appParams.insert("q", q);
}



TaobaokeCaturlGetResponse *TaobaokeCaturlGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  TaobaokeCaturlGetResponse *tmpResponse = new TaobaokeCaturlGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
