#ifndef FENXIAOCOOPERATIONAUDITREQUEST_H
#define FENXIAOCOOPERATIONAUDITREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/FenxiaoCooperationAuditResponse.h>

/**
 * TOP API: 合作授权审批
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class FenxiaoCooperationAuditRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getAuditResult() const
;  void setAuditResult (qlonglong auditResult);

 QString getProductLineListAgent() const
;  void setProductLineListAgent (QString productLineListAgent);

 QString getProductLineListDealer() const
;  void setProductLineListDealer (QString productLineListDealer);

 QString getRemark() const
;  void setRemark (QString remark);

 qlonglong getRequisitionId() const
;  void setRequisitionId (qlonglong requisitionId);


  virtual FenxiaoCooperationAuditResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 1:审批通过，审批通过后要加入授权产品线列表； 
2:审批拒绝
 **/
  qlonglong auditResult;

/**
 * @brief 当审批通过时需要指定授权产品线id列表(代销)，如果没传则表示不开通，且经销和代销的授权产品线列表至少传入一种，同时传入则表示都开通。
 **/
  QString productLineListAgent;

/**
 * @brief 当审批通过时需要指定授权产品线id列表(经销)，如果没传则表示不开通，且经销和代销的授权产品线列表至少传入一种，同时传入则表示都开通。
 **/
  QString productLineListDealer;

/**
 * @brief 备注
 **/
  QString remark;

/**
 * @brief 合作申请Id
 **/
  qlonglong requisitionId;

};

#endif  /* FENXIAOCOOPERATIONAUDITREQUEST_H */
