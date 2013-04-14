#ifndef ROUTESTATISTICSINFO_H
#define ROUTESTATISTICSINFO_H

#include <TaoApiCpp/TaoDomain.h>
#include <QString>


/**
 * @brief 线路的统计信息
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class RouteStatisticsInfo : public TaoDomain
{

public:
 virtual ~RouteStatisticsInfo() { }

  qlonglong getEvaluationCount() const;
  void setEvaluationCount (qlonglong evaluationCount);
  QString getEvaluationScore() const;
  void setEvaluationScore (QString evaluationScore);
  qlonglong getFromNetworkCount() const;
  void setFromNetworkCount (qlonglong fromNetworkCount);
  qlonglong getToNetworkCount() const;
  void setToNetworkCount (qlonglong toNetworkCount);
  qlonglong getTrunkRouteOrderCount() const;
  void setTrunkRouteOrderCount (qlonglong trunkRouteOrderCount);
  
  virtual void parseResponse();

private:
/**
 * @brief 评价数
 **/
  qlonglong evaluationCount;

/**
 * @brief 评价分值
 **/
  QString evaluationScore;

/**
 * @brief 发货网点个数
 **/
  qlonglong fromNetworkCount;

/**
 * @brief 目的地网点个数
 **/
  qlonglong toNetworkCount;

/**
 * @brief 干线上的下单量
 **/
  qlonglong trunkRouteOrderCount;

};

#endif  /* ROUTESTATISTICSINFO_H */
