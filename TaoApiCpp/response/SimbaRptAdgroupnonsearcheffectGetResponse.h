#ifndef SIMBARPTADGROUPNONSEARCHEFFECTGETRESPONSE_H
#define SIMBARPTADGROUPNONSEARCHEFFECTGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>


/**
 * @brief TOP RESPONSE API: 推广组下的定向推广效果数据查询
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SimbaRptAdgroupnonsearcheffectGetResponse : public TaoResponse
{
public:
 virtual ~SimbaRptAdgroupnonsearcheffectGetResponse() { }

  QString getRptAdgroupNonsearchEffect() const;
  void setRptAdgroupNonsearchEffect (QString rptAdgroupNonsearchEffect);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 非搜索推广组效果对象
 **/
  QString rptAdgroupNonsearchEffect;

};

#endif
