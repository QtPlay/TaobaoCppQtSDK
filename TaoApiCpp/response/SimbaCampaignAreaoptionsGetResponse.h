#ifndef SIMBACAMPAIGNAREAOPTIONSGETRESPONSE_H
#define SIMBACAMPAIGNAREAOPTIONSGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/AreaOption.h>


/**
 * @brief TOP RESPONSE API: 取得推广计划的可设置投放地域列表
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SimbaCampaignAreaoptionsGetResponse : public TaoResponse
{
public:
 virtual ~SimbaCampaignAreaoptionsGetResponse() { }

  QList<AreaOption> getAreaOptions() const;
  void setAreaOptions (QList<AreaOption> areaOptions);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 推广计划所有可设置的投放地域
 **/
  QList<AreaOption> areaOptions;

};

#endif
