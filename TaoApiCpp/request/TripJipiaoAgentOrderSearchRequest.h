#ifndef TRIPJIPIAOAGENTORDERSEARCHREQUEST_H
#define TRIPJIPIAOAGENTORDERSEARCHREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/TripJipiaoAgentOrderSearchResponse.h>

/**
 * TOP API: 根据条件查询淘宝订单id列表
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class TripJipiaoAgentOrderSearchRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QDateTime getBeginTime() const
;  void setBeginTime (QDateTime beginTime);

 QDateTime getEndTime() const
;  void setEndTime (QDateTime endTime);

 bool getHasItinerary() const
;  void setHasItinerary (bool hasItinerary);

 qlonglong getPage() const
;  void setPage (qlonglong page);

 qlonglong getStatus() const
;  void setStatus (qlonglong status);

 qlonglong getTripType() const
;  void setTripType (qlonglong tripType);


  virtual TripJipiaoAgentOrderSearchResponse *getResponseClass(const QString &session = "",
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
 * @brief 是否需要行程单，true表示需要行程单；false表示不许要 （必须设置，且不能为null）
 **/
  bool hasItinerary;

/**
 * @brief 页码，默认第一页；注意：页大小固定，搜索结果中返回页大小pageSize，和是否包含下一页hasNext
 **/
  qlonglong page;

/**
 * @brief 订单状态，默认为空，查询所有状态的订单
 **/
  qlonglong status;

/**
 * @brief 航程类型： 0.单程和普通往返；2.多程（暂时没有使用）；3.特价往返
 **/
  qlonglong tripType;

};

#endif  /* TRIPJIPIAOAGENTORDERSEARCHREQUEST_H */
