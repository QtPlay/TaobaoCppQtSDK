#include <TaoApiCpp/request/HotelMatchFeedbackRequest.h>

QString HotelMatchFeedbackRequest::getApiMethodName() const {
  return "taobao.hotel.match.feedback";
}

qlonglong HotelMatchFeedbackRequest::getHaid() const {
  return haid;
}
void HotelMatchFeedbackRequest::setHaid (qlonglong haid) {
  this->haid = haid;
  appParams.insert("haid", QString::number(haid));
}

qlonglong HotelMatchFeedbackRequest::getHid() const {
  return hid;
}
void HotelMatchFeedbackRequest::setHid (qlonglong hid) {
  this->hid = hid;
  appParams.insert("hid", QString::number(hid));
}

qlonglong HotelMatchFeedbackRequest::getMatchResult() const {
  return matchResult;
}
void HotelMatchFeedbackRequest::setMatchResult (qlonglong matchResult) {
  this->matchResult = matchResult;
  appParams.insert("match_result", QString::number(matchResult));
}



HotelMatchFeedbackResponse *HotelMatchFeedbackRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  HotelMatchFeedbackResponse *tmpResponse = new HotelMatchFeedbackResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
