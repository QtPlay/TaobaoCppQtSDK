#ifndef QUERYROUTERESULT_H
#define QUERYROUTERESULT_H

#include <TaoApiCpp/TaoDomain.h>
#include <QList>
#include <QString>
#include <TaoApiCpp/domain/CompanyRouteSummary.h>
#include <TaoApiCpp/domain/RouteAlpPage.h>
#include <TaoApiCpp/domain/RouteVasInfo.h>


/**
 * @brief 查询线路的结果
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class QueryRouteResult : public TaoDomain
{

public:
 virtual ~QueryRouteResult() { }

  QList<CompanyRouteSummary> getCompanyRouteSummarys() const;
  void setCompanyRouteSummarys (QList<CompanyRouteSummary> companyRouteSummarys);
  bool getIsTurnLevel() const;
  void setIsTurnLevel (bool isTurnLevel);
  RouteAlpPage getPagesRouteDetails() const;
  void setPagesRouteDetails (RouteAlpPage pagesRouteDetails);
  QList<RouteVasInfo> getRouteVas() const;
  void setRouteVas (QList<RouteVasInfo> routeVas);
  qlonglong getTotalCorps() const;
  void setTotalCorps (qlonglong totalCorps);
  qlonglong getTotalRoutes() const;
  void setTotalRoutes (qlonglong totalRoutes);
  
  virtual void parseResponse();

private:
/**
 * @brief 公司的线路统计信息。如德邦有几条线路。
 **/
  QList<CompanyRouteSummary> companyRouteSummarys;

/**
 * @brief 是否上翻
 **/
  bool isTurnLevel;

/**
 * @brief 线路详情
 **/
  RouteAlpPage pagesRouteDetails;

/**
 * @brief 增值服务。
 **/
  QList<RouteVasInfo> routeVas;

/**
 * @brief 总公司数
 **/
  qlonglong totalCorps;

/**
 * @brief 总线路数
 **/
  qlonglong totalRoutes;

};

#endif  /* QUERYROUTERESULT_H */
