#ifndef SIMBANONSEARCHDEMOGRAPHICSUPDATERESPONSE_H
#define SIMBANONSEARCHDEMOGRAPHICSUPDATERESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/DemographicSetting.h>


/**
 * @brief TOP RESPONSE API: 设置投放人群维度加价，如果给定的campagin没有设置给定的人群维度则添加给定的人群维度，如果给定的campaign已存在给定的人群维度则修改加价
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SimbaNonsearchDemographicsUpdateResponse : public TaoResponse
{
public:
 virtual ~SimbaNonsearchDemographicsUpdateResponse() { }

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
