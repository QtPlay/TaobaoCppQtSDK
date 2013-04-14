#ifndef FENXIAOREQUISITIONSGETREQUEST_H
#define FENXIAOREQUISITIONSGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/FenxiaoRequisitionsGetResponse.h>

/**
 * TOP API: 合作申请查询
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class FenxiaoRequisitionsGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QDateTime getApplyEnd() const
;  void setApplyEnd (QDateTime applyEnd);

 QDateTime getApplyStart() const
;  void setApplyStart (QDateTime applyStart);

 qlonglong getPageNo() const
;  void setPageNo (qlonglong pageNo);

 qlonglong getPageSize() const
;  void setPageSize (qlonglong pageSize);

 qlonglong getStatus() const
;  void setStatus (qlonglong status);


  virtual FenxiaoRequisitionsGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 申请结束时间yyyy-MM-dd
 **/
  QDateTime applyEnd;

/**
 * @brief 申请开始时间yyyy-MM-dd
 **/
  QDateTime applyStart;

/**
 * @brief 页码（大于0的整数，默认1）
 **/
  qlonglong pageNo;

/**
 * @brief 每页记录数（默认20，最大50）
 **/
  qlonglong pageSize;

/**
 * @brief 申请状态（1-申请中、2-成功、3-被退回、4-已撤消、5-过期）
 **/
  qlonglong status;

};

#endif  /* FENXIAOREQUISITIONSGETREQUEST_H */
