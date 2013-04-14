#ifndef SIMBARPTADGROUPCREATIVEEFFECTGETRESPONSE_H
#define SIMBARPTADGROUPCREATIVEEFFECTGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>


/**
 * @brief TOP RESPONSE API: 推广组下的创意报表效果数据查询(汇总数据，不分类型)
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SimbaRptAdgroupcreativeeffectGetResponse : public TaoResponse
{
public:
 virtual ~SimbaRptAdgroupcreativeeffectGetResponse() { }

  QString getRptAdgroupcreativeEffectList() const;
  void setRptAdgroupcreativeEffectList (QString rptAdgroupcreativeEffectList);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 推广组下的创意效果数据列表
 **/
  QString rptAdgroupcreativeEffectList;

};

#endif
