#ifndef WLBSUBSCRIPTIONQUERYREQUEST_H
#define WLBSUBSCRIPTIONQUERYREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/WlbSubscriptionQueryResponse.h>

/**
 * TOP API: 查询商家定购的所有服务,可通过入参状态来筛选
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class WlbSubscriptionQueryRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getPageNo() const
;  void setPageNo (qlonglong pageNo);

 qlonglong getPageSize() const
;  void setPageSize (qlonglong pageSize);

 QString getStatus() const
;  void setStatus (QString status);


  virtual WlbSubscriptionQueryResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 当前页
 **/
  qlonglong pageNo;

/**
 * @brief 分页记录个数，如果用户输入的记录数大于50，则一页显示50条记录
 **/
  qlonglong pageSize;

/**
 * @brief 状态  
AUDITING 1-待审核;  
CANCEL 2-撤销 ; 
CHECKED 3-审核通过 ; 
FAILED 4-审核未通过 ; 
SYNCHRONIZING 5-同步中; 
只允许输入上面指定的值，且可以为空，为空时查询所有状态。若输错了，则按AUDITING处理。
 **/
  QString status;

};

#endif  /* WLBSUBSCRIPTIONQUERYREQUEST_H */
