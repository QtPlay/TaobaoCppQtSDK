#ifndef SIMBARPTADGROUPEFFECTGETRESPONSE_H
#define SIMBARPTADGROUPEFFECTGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>


/**
 * @brief TOP RESPONSE API: 推广组效果报表数据对象
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SimbaRptAdgroupeffectGetResponse : public TaoResponse
{
public:
 virtual ~SimbaRptAdgroupeffectGetResponse() { }

  QString getRptAdgroupEffectList() const;
  void setRptAdgroupEffectList (QString rptAdgroupEffectList);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 推广组效果报表数据对象
 **/
  QString rptAdgroupEffectList;

};

#endif
