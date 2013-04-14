#ifndef SIMBAADGROUPCATMATCHFORECASTGETRESPONSE_H
#define SIMBAADGROUPCATMATCHFORECASTGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/ADGroupCatMatchForecast.h>


/**
 * @brief TOP RESPONSE API: 获取指定推广组下给定出价的类目出价预估信息;
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SimbaAdgroupCatmatchforecastGetResponse : public TaoResponse
{
public:
 virtual ~SimbaAdgroupCatmatchforecastGetResponse() { }

  ADGroupCatMatchForecast getAdgroupCatmatchForecast() const;
  void setAdgroupCatmatchForecast (ADGroupCatMatchForecast adgroupCatmatchForecast);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 类目出价预估结果信息 预测数据皆为估算结果，以实际发生为准
 **/
  ADGroupCatMatchForecast adgroupCatmatchForecast;

};

#endif
