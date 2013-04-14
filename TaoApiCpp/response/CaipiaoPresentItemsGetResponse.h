#ifndef CAIPIAOPRESENTITEMSGETRESPONSE_H
#define CAIPIAOPRESENTITEMSGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/LotteryWangcaiPresent.h>


/**
 * @brief TOP RESPONSE API: 查询卖家指定时间范围内的赠送订单列表, 只查询3个月以内的数据
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class CaipiaoPresentItemsGetResponse : public TaoResponse
{
public:
 virtual ~CaipiaoPresentItemsGetResponse() { }

  QList<LotteryWangcaiPresent> getResults() const;
  void setResults (QList<LotteryWangcaiPresent> results);  qlonglong getTotalResults() const;
  void setTotalResults (qlonglong totalResults);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 查询的结果列表
 **/
  QList<LotteryWangcaiPresent> results;

/**
 * @brief 返回列表的大小
 **/
  qlonglong totalResults;

};

#endif
