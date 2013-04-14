#ifndef LOGISTICSROUTEQUERYREQUEST_H
#define LOGISTICSROUTEQUERYREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/LogisticsRouteQueryResponse.h>

/**
 * TOP API: 根据始发地，目的地等条件查询线路的分页列表
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class LogisticsRouteQueryRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 bool getAirTransport() const
;  void setAirTransport (bool airTransport);

 QString getCorpList() const
;  void setCorpList (QString corpList);

 qlonglong getEndAreaId() const
;  void setEndAreaId (qlonglong endAreaId);

 bool getMergeRoute() const
;  void setMergeRoute (bool mergeRoute);

 qlonglong getPageIndex() const
;  void setPageIndex (qlonglong pageIndex);

 qlonglong getPageSize() const
;  void setPageSize (qlonglong pageSize);

 bool getShowCods() const
;  void setShowCods (bool showCods);

 bool getShowSpecials() const
;  void setShowSpecials (bool showSpecials);

 bool getShowStatisticsInfo() const
;  void setShowStatisticsInfo (bool showStatisticsInfo);

 QString getSortType() const
;  void setSortType (QString sortType);

 QString getSource() const
;  void setSource (QString source);

 qlonglong getStartAreaId() const
;  void setStartAreaId (qlonglong startAreaId);

 bool getSummaryTotalCorps() const
;  void setSummaryTotalCorps (bool summaryTotalCorps);

 bool getSummeryByCorp() const
;  void setSummeryByCorp (bool summeryByCorp);

 bool getTurnLevel() const
;  void setTurnLevel (bool turnLevel);


  virtual LogisticsRouteQueryResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 是否是空运的条件
 **/
  bool airTransport;

/**
 * @brief 过滤线路的公司塞选条件
 **/
  QString corpList;

/**
 * @brief 目的地id，可以是市和区
 **/
  qlonglong endAreaId;

/**
 * @brief 是否合并线路
 **/
  bool mergeRoute;

/**
 * @brief 当前第几页
 **/
  qlonglong pageIndex;

/**
 * @brief 每页显示的线路数
 **/
  qlonglong pageSize;

/**
 * @brief 线路是否具有代收货款服务
 **/
  bool showCods;

/**
 * @brief 线路是否显示保障服务
 **/
  bool showSpecials;

/**
 * @brief 是否在线路中显示评价和网点信息
 **/
  bool showStatisticsInfo;

/**
 * @brief 线路排序方式。具体值如下,precise：精确匹配，corp：公司,wpa：重物价格升序,wpd：重物价格降序,vpa：体积价格升序,vpd：体积价格降序,trtid：运输时效降序,trtia：运输时效升序,corpLevel：公司级别，品牌>集市,evalScore：评价分数,routeTop：线路是否置顶,orderCount：下单量多少排序,special：保障服务优先排序。
 **/
  QString sortType;

/**
 * @brief 数据来源，默认开放部分物流公司。
 **/
  QString source;

/**
 * @brief 起始地id，可以是市和区
 **/
  qlonglong startAreaId;

/**
 * @brief 是否查询总的查询条件的公司数目
 **/
  bool summaryTotalCorps;

/**
 * @brief 是否统计对应公司的线路数
 **/
  bool summeryByCorp;

/**
 * @brief 如果查找不到指定地区的线路，是否对地址进行上翻。如杭州市滨江区的地址呗翻转为杭州市。
 **/
  bool turnLevel;

};

#endif  /* LOGISTICSROUTEQUERYREQUEST_H */
