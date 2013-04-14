#ifndef SIMBANONSEARCHDEMOGRAPHICSGETRESPONSE_H
#define SIMBANONSEARCHDEMOGRAPHICSGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/DemographicSetting.h>


/**
 * @brief TOP RESPONSE API: 获取给定campaign设置的投放人群维度列表
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SimbaNonsearchDemographicsGetResponse : public TaoResponse
{
public:
 virtual ~SimbaNonsearchDemographicsGetResponse() { }

  QList<DemographicSetting> getDemographicSettingList() const;
  void setDemographicSettingList (QList<DemographicSetting> demographicSettingList);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 人群维度设置列表
 **/
  QList<DemographicSetting> demographicSettingList;

};

#endif
