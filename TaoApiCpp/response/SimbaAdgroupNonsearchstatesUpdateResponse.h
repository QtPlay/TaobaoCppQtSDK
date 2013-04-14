#ifndef SIMBAADGROUPNONSEARCHSTATESUPDATERESPONSE_H
#define SIMBAADGROUPNONSEARCHSTATESUPDATERESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/ADGroup.h>


/**
 * @brief TOP RESPONSE API: 更改通投状态（暂停或启动）
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SimbaAdgroupNonsearchstatesUpdateResponse : public TaoResponse
{
public:
 virtual ~SimbaAdgroupNonsearchstatesUpdateResponse() { }

  QList<ADGroup> getAdgroupList() const;
  void setAdgroupList (QList<ADGroup> adgroupList);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 推广组列表
 **/
  QList<ADGroup> adgroupList;

};

#endif
