#ifndef SIMBAADGROUPDELETEDCATMATCHSGETRESPONSE_H
#define SIMBAADGROUPDELETEDCATMATCHSGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/ADGroupCatMatchPage.h>


/**
 * @brief TOP RESPONSE API: 获取删除的类目出价列表（只存类目出价ID和推广组ID）
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SimbaAdgroupDeletedcatmatchsGetResponse : public TaoResponse
{
public:
 virtual ~SimbaAdgroupDeletedcatmatchsGetResponse() { }

  ADGroupCatMatchPage getDeletedCatmatchs() const;
  void setDeletedCatmatchs (ADGroupCatMatchPage deletedCatmatchs);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 一页类目出价对象
 **/
  ADGroupCatMatchPage deletedCatmatchs;

};

#endif
