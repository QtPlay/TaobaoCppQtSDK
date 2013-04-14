#ifndef CAIPIAOPRESENTSTATGETRESPONSE_H
#define CAIPIAOPRESENTSTATGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/LotteryWangcaiPresentStat.h>


/**
 * @brief TOP RESPONSE API: 查询卖家一段时间内按天统计的彩票赠送数据，只支持查询90天以内的数据.
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class CaipiaoPresentStatGetResponse : public TaoResponse
{
public:
 virtual ~CaipiaoPresentStatGetResponse() { }

  QList<LotteryWangcaiPresentStat> getResults() const;
  void setResults (QList<LotteryWangcaiPresentStat> results);  qlonglong getTotalResults() const;
  void setTotalResults (qlonglong totalResults);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 查询的结果集
 **/
  QList<LotteryWangcaiPresentStat> results;

/**
 * @brief 查询的结果集大小
 **/
  qlonglong totalResults;

};

#endif
