#ifndef WLBREPLENISHSTATISTICSRESPONSE_H
#define WLBREPLENISHSTATISTICSRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/WlbReplenish.h>


/**
 * @brief TOP RESPONSE API: 查询BI的统计的补货统计数据
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class WlbReplenishStatisticsResponse : public TaoResponse
{
public:
 virtual ~WlbReplenishStatisticsResponse() { }

  QList<WlbReplenish> getReplenishList() const;
  void setReplenishList (QList<WlbReplenish> replenishList);  qlonglong getTotalCount() const;
  void setTotalCount (qlonglong totalCount);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 补货统计列表
 **/
  QList<WlbReplenish> replenishList;

/**
 * @brief 查询记录总数
 **/
  qlonglong totalCount;

};

#endif
