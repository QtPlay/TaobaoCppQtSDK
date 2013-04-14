#ifndef UMPDETAILLISTADDRESPONSE_H
#define UMPDETAILLISTADDRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>


/**
 * @brief TOP RESPONSE API: 批量添加营销活动。替代单条添加营销详情的的API。此接口适用针对某个营销活动的多档设置，会按顺序插入detail。若在整个事务过程中出现断点，会将已插入完成的detail_id返回，注意记录这些id，并将其删除，会对交易过程中的优惠产生影响。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class UmpDetailListAddResponse : public TaoResponse
{
public:
 virtual ~UmpDetailListAddResponse() { }

  QList<qlonglong> getDetailIdList() const;
  void setDetailIdList (QList<qlonglong> detailIdList);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 返回对应的营销详情的id列表！若有某一条插入失败，会将插入成功的detail_id放到errorMessage里面返回，此时errorMessage里面会包含格式为(id1,id2,id3)的插入成功id列表。这些ids会对交易产生影响，通过截取此信息，将对应detail删除！
 **/
  QList<qlonglong> detailIdList;

};

#endif
