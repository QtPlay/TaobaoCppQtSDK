#ifndef SIMBAADGROUPCHANGEDCATMATCHSGETRESPONSE_H
#define SIMBAADGROUPCHANGEDCATMATCHSGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/ADGroupCatMatchPage.h>


/**
 * @brief TOP RESPONSE API: 分页获取修改过的推广组类目出价ID , 推广组ID，修改时间
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SimbaAdgroupChangedcatmatchsGetResponse : public TaoResponse
{
public:
 virtual ~SimbaAdgroupChangedcatmatchsGetResponse() { }

  ADGroupCatMatchPage getChangedCatmatchs() const;
  void setChangedCatmatchs (ADGroupCatMatchPage changedCatmatchs);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 一页类目出价对象
 **/
  ADGroupCatMatchPage changedCatmatchs;

};

#endif
