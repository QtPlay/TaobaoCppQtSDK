#ifndef SIMBARPTADGROUPKEYWORDEFFECTGETRESPONSE_H
#define SIMBARPTADGROUPKEYWORDEFFECTGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>


/**
 * @brief TOP RESPONSE API: 推广组下的词效果报表数据查询(明细数据不分类型查询)
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SimbaRptAdgroupkeywordeffectGetResponse : public TaoResponse
{
public:
 virtual ~SimbaRptAdgroupkeywordeffectGetResponse() { }

  QString getRptAdgroupkeywordEffectList() const;
  void setRptAdgroupkeywordEffectList (QString rptAdgroupkeywordEffectList);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 词效果数据返回结果
 **/
  QString rptAdgroupkeywordEffectList;

};

#endif
