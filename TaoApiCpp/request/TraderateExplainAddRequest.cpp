#include <TaoApiCpp/request/TraderateExplainAddRequest.h>

QString TraderateExplainAddRequest::getApiMethodName() const {
  return "taobao.traderate.explain.add";
}

qlonglong TraderateExplainAddRequest::getOid() const {
  return oid;
}
void TraderateExplainAddRequest::setOid (qlonglong oid) {
  this->oid = oid;
  appParams.insert("oid", QString::number(oid));
}

QString TraderateExplainAddRequest::getReply() const {
  return reply;
}
void TraderateExplainAddRequest::setReply (QString reply) {
  this->reply = reply;
  appParams.insert("reply", reply);
}



TraderateExplainAddResponse *TraderateExplainAddRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  TraderateExplainAddResponse *tmpResponse = new TraderateExplainAddResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
