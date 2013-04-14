#ifndef TRIPJIPIAOAGENTORDERFINDREQUEST_H
#define TRIPJIPIAOAGENTORDERFINDREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/TripJipiaoAgentOrderFindResponse.h>

/**
 * TOP API: 根据淘宝机票政策id搜索订单
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class TripJipiaoAgentOrderFindRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QDateTime getBeginTime() const
;  void setBeginTime (QDateTime beginTime);

 QDateTime getEndTime() const
;  void setEndTime (QDateTime endTime);

 qlonglong getPage() const
;  void setPage (qlonglong page);

 qlonglong getPolicyId() const
;  void setPolicyId (qlonglong policyId);


  virtual TripJipiaoAgentOrderFindResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 创建订单时间范围的开始时间，注意：当前搜索条件开始结束时间范围不能超过三天，默认开始时间为当前时间往前推三天 （具体天数可能调整）
 **/
  QDateTime beginTime;

/**
 * @brief 创建订单时间范围的结束时间，注意：当前搜索条件开始结束时间范围不能超过三天，默认为当前时间 （具体天数可能调整）
 **/
  QDateTime endTime;

/**
 * @brief 页码，默认第一页；注意：页大小固定，搜索结果中返回页大小pageSize，和是否包含下一页hasNext
 **/
  qlonglong page;

/**
 * @brief 淘宝机票政策id
 **/
  qlonglong policyId;

};

#endif  /* TRIPJIPIAOAGENTORDERFINDREQUEST_H */
