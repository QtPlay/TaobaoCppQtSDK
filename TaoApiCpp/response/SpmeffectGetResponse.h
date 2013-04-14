#ifndef SPMEFFECTGETRESPONSE_H
#define SPMEFFECTGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/SpmResult.h>


/**
 * @brief TOP RESPONSE API: 导购效果SPM报表查询，可查询某天某站点某频道某页面为淘宝带来的流量及成交情况（对于page和module最多返回10000条数据，请正确使用spm数据） 
只能查询距离今天3个月内的数据
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SpmeffectGetResponse : public TaoResponse
{
public:
 virtual ~SpmeffectGetResponse() { }

  SpmResult getSpmResult() const;
  void setSpmResult (SpmResult spmResult);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 某一天该Appkey的站点导购数据
 **/
  SpmResult spmResult;

};

#endif
