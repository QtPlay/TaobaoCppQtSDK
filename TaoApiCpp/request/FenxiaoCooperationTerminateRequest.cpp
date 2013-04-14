#include <TaoApiCpp/request/FenxiaoCooperationTerminateRequest.h>

QString FenxiaoCooperationTerminateRequest::getApiMethodName() const {
  return "taobao.fenxiao.cooperation.terminate";
}

qlonglong FenxiaoCooperationTerminateRequest::getCooperateId() const {
  return cooperateId;
}
void FenxiaoCooperationTerminateRequest::setCooperateId (qlonglong cooperateId) {
  this->cooperateId = cooperateId;
  appParams.insert("cooperate_id", QString::number(cooperateId));
}

qlonglong FenxiaoCooperationTerminateRequest::getEndRemainDays() const {
  return endRemainDays;
}
void FenxiaoCooperationTerminateRequest::setEndRemainDays (qlonglong endRemainDays) {
  this->endRemainDays = endRemainDays;
  appParams.insert("end_remain_days", QString::number(endRemainDays));
}

QString FenxiaoCooperationTerminateRequest::getEndRemark() const {
  return endRemark;
}
void FenxiaoCooperationTerminateRequest::setEndRemark (QString endRemark) {
  this->endRemark = endRemark;
  appParams.insert("end_remark", endRemark);
}



FenxiaoCooperationTerminateResponse *FenxiaoCooperationTerminateRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  FenxiaoCooperationTerminateResponse *tmpResponse = new FenxiaoCooperationTerminateResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
