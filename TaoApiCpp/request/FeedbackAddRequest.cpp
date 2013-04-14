#include <TaoApiCpp/request/FeedbackAddRequest.h>

QString FeedbackAddRequest::getApiMethodName() const {
  return "taobao.feedback.add";
}

QString FeedbackAddRequest::getInfo() const {
  return info;
}
void FeedbackAddRequest::setInfo (QString info) {
  this->info = info;
  appParams.insert("info", info);
}

QString FeedbackAddRequest::getType() const {
  return type;
}
void FeedbackAddRequest::setType (QString type) {
  this->type = type;
  appParams.insert("type", type);
}



FeedbackAddResponse *FeedbackAddRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  FeedbackAddResponse *tmpResponse = new FeedbackAddResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
