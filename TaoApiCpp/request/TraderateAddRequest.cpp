#include <TaoApiCpp/request/TraderateAddRequest.h>

QString TraderateAddRequest::getApiMethodName() const {
  return "taobao.traderate.add";
}

bool TraderateAddRequest::getAnony() const {
  return anony;
}
void TraderateAddRequest::setAnony (bool anony) {
  this->anony = anony;
  appParams.insert("anony", anony? "true": "false");
}

QString TraderateAddRequest::getContent() const {
  return content;
}
void TraderateAddRequest::setContent (QString content) {
  this->content = content;
  appParams.insert("content", content);
}

qlonglong TraderateAddRequest::getOid() const {
  return oid;
}
void TraderateAddRequest::setOid (qlonglong oid) {
  this->oid = oid;
  appParams.insert("oid", QString::number(oid));
}

QString TraderateAddRequest::getResult() const {
  return result;
}
void TraderateAddRequest::setResult (QString result) {
  this->result = result;
  appParams.insert("result", result);
}

QString TraderateAddRequest::getRole() const {
  return role;
}
void TraderateAddRequest::setRole (QString role) {
  this->role = role;
  appParams.insert("role", role);
}

qlonglong TraderateAddRequest::getTid() const {
  return tid;
}
void TraderateAddRequest::setTid (qlonglong tid) {
  this->tid = tid;
  appParams.insert("tid", QString::number(tid));
}



TraderateAddResponse *TraderateAddRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  TraderateAddResponse *tmpResponse = new TraderateAddResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
