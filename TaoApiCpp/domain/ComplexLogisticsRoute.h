#ifndef COMPLEXLOGISTICSROUTE_H
#define COMPLEXLOGISTICSROUTE_H

#include <TaoApiCpp/TaoDomain.h>
#include <QString>
#include <TaoApiCpp/domain/RouteCarriageInfo.h>
#include <TaoApiCpp/domain/FreightCompany.h>
#include <TaoApiCpp/domain/RouteExtenalInfo.h>
#include <TaoApiCpp/domain/RoutePromotionInfo.h>
#include <TaoApiCpp/domain/RouteStatisticsInfo.h>


/**
 * @brief 线路的整条完整信息
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class ComplexLogisticsRoute : public TaoDomain
{

public:
 virtual ~ComplexLogisticsRoute() { }

  RouteCarriageInfo getCarriageInfo() const;
  void setCarriageInfo (RouteCarriageInfo carriageInfo);
  FreightCompany getCompany() const;
  void setCompany (FreightCompany company);
  RouteExtenalInfo getExtenalInfo() const;
  void setExtenalInfo (RouteExtenalInfo extenalInfo);
  qlonglong getFromAreaId() const;
  void setFromAreaId (qlonglong fromAreaId);
  QString getFromCityName() const;
  void setFromCityName (QString fromCityName);
  QString getFromCountyName() const;
  void setFromCountyName (QString fromCountyName);
  QString getFromProvinceName() const;
  void setFromProvinceName (QString fromProvinceName);
  RoutePromotionInfo getPromotionInfo() const;
  void setPromotionInfo (RoutePromotionInfo promotionInfo);
  QString getRouteCode() const;
  void setRouteCode (QString routeCode);
  RouteStatisticsInfo getStatisticsInfo() const;
  void setStatisticsInfo (RouteStatisticsInfo statisticsInfo);
  qlonglong getToAreaId() const;
  void setToAreaId (qlonglong toAreaId);
  QString getToCityName() const;
  void setToCityName (QString toCityName);
  QString getToCountyName() const;
  void setToCountyName (QString toCountyName);
  QString getToProvinceName() const;
  void setToProvinceName (QString toProvinceName);
  
  virtual void parseResponse();

private:
/**
 * @brief 线路运输相关的信息
 **/
  RouteCarriageInfo carriageInfo;

/**
 * @brief 物流公司信息
 **/
  FreightCompany company;

/**
 * @brief 线路扩展信息
 **/
  RouteExtenalInfo extenalInfo;

/**
 * @brief 始发地area id
 **/
  qlonglong fromAreaId;

/**
 * @brief 始发城市名
 **/
  QString fromCityName;

/**
 * @brief 始发区
 **/
  QString fromCountyName;

/**
 * @brief 始发省
 **/
  QString fromProvinceName;

/**
 * @brief 促销相关信息
 **/
  RoutePromotionInfo promotionInfo;

/**
 * @brief 线路code标识
 **/
  QString routeCode;

/**
 * @brief 线路上相关的统计信息
 **/
  RouteStatisticsInfo statisticsInfo;

/**
 * @brief 目的地area id
 **/
  qlonglong toAreaId;

/**
 * @brief 目的地城市
 **/
  QString toCityName;

/**
 * @brief 目的地区
 **/
  QString toCountyName;

/**
 * @brief 目的地省
 **/
  QString toProvinceName;

};

#endif  /* COMPLEXLOGISTICSROUTE_H */
