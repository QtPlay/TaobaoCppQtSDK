#ifndef SIMBAADGROUPCAMPCATMATCHSGETRESPONSE_H
#define SIMBAADGROUPCAMPCATMATCHSGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/ADGroupCatMatchPage.h>


/**
 * @brief TOP RESPONSE API: 根据一个推广计划的id获取一页推广组类目出价列表
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SimbaAdgroupCampcatmatchsGetResponse : public TaoResponse
{
public:
 virtual ~SimbaAdgroupCampcatmatchsGetResponse() { }

  ADGroupCatMatchPage getAdgroupcatmatchs() const;
  void setAdgroupcatmatchs (ADGroupCatMatchPage adgroupcatmatchs);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 一页推广组类目出价列表
 **/
  ADGroupCatMatchPage adgroupcatmatchs;

};

#endif
