#include <TaoApiCpp/request/TraderateListAddRequest.h>

QString TraderateListAddRequest::getApiMethodName() const {
  return "taobao.traderate.list.add";
}

bool TraderateListAddRequest::getAnony() const {
  return anony;
}
void TraderateListAddRequest::setAnony (bool anony) {
  this->anony = anony;
  appParams.insert("anony", anony? "true": "false");
}

QString TraderateListAddRequest::getContent() const {
  return content;
}
void TraderateListAddRequest::setContent (QString content) {
  this->content = content;
  appParams.insert("content", content);
}

QString TraderateListAddRequest::getResult() const {
  return result;
}
void TraderateListAddRequest::setResult (QString result) {
  this->result = result;
  appParams.insert("result", result);
}

QString TraderateListAddRequest::getRole() const {
  return role;
}
void TraderateListAddRequest::setRole (QString role) {
  this->role = role;
  appParams.insert("role", role);
}

qlonglong TraderateListAddRequest::getTid() const {
  return tid;
}
void TraderateListAddRequest::setTid (qlonglong tid) {
  this->tid = tid;
  appParams.insert("tid", QString::number(tid));
}



TraderateListAddResponse *TraderateListAddRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  TraderateListAddResponse *tmpResponse = new TraderateListAddResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
