#include <TaoApiCpp/request/FenxiaoCooperationAuditRequest.h>

QString FenxiaoCooperationAuditRequest::getApiMethodName() const {
  return "taobao.fenxiao.cooperation.audit";
}

qlonglong FenxiaoCooperationAuditRequest::getAuditResult() const {
  return auditResult;
}
void FenxiaoCooperationAuditRequest::setAuditResult (qlonglong auditResult) {
  this->auditResult = auditResult;
  appParams.insert("audit_result", QString::number(auditResult));
}

QString FenxiaoCooperationAuditRequest::getProductLineListAgent() const {
  return productLineListAgent;
}
void FenxiaoCooperationAuditRequest::setProductLineListAgent (QString productLineListAgent) {
  this->productLineListAgent = productLineListAgent;
  appParams.insert("product_line_list_agent", productLineListAgent);
}

QString FenxiaoCooperationAuditRequest::getProductLineListDealer() const {
  return productLineListDealer;
}
void FenxiaoCooperationAuditRequest::setProductLineListDealer (QString productLineListDealer) {
  this->productLineListDealer = productLineListDealer;
  appParams.insert("product_line_list_dealer", productLineListDealer);
}

QString FenxiaoCooperationAuditRequest::getRemark() const {
  return remark;
}
void FenxiaoCooperationAuditRequest::setRemark (QString remark) {
  this->remark = remark;
  appParams.insert("remark", remark);
}

qlonglong FenxiaoCooperationAuditRequest::getRequisitionId() const {
  return requisitionId;
}
void FenxiaoCooperationAuditRequest::setRequisitionId (qlonglong requisitionId) {
  this->requisitionId = requisitionId;
  appParams.insert("requisition_id", QString::number(requisitionId));
}



FenxiaoCooperationAuditResponse *FenxiaoCooperationAuditRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  FenxiaoCooperationAuditResponse *tmpResponse = new FenxiaoCooperationAuditResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
