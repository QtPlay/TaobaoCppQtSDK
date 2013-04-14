#ifndef TOPATSITEMCATSGETREQUEST_H
#define TOPATSITEMCATSGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/TopatsItemcatsGetResponse.h>

/**
 * TOP API: 全量获取后台类目、类目属性、类目属性值数据 
<br/>异步API使用方法，请查看：<a href="http://open.taobao.com/doc/detail.htm?id=30">异步API使用说明</a> 
<br/>1. 每天8点左右会产生今天的全量数据，在8点之前提交获取全量类目数据任务需要等到8点之后才完成，在8点之后提交获取全量类目数据任务可以接近实时返回。 
<br/>2. 提交任务后，通过taobao.topats.result.get来查看任务执行状态，如果任务已完成，则返回下载URL 
<br/>3. 如果订阅了主动通知服务，任务完成后TOP会通过HTTP长连接推送消息，通知的消息格式请参考异步API使用文档 
<br/>4. 下载到的结果是zip压缩包，解压后得到一个标准的csv/json格式的文本文件，文件内容的默认编码格式是UTF-8
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class TopatsItemcatsGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getCids() const
;  void setCids (QString cids);

 QString getOutputFormat() const
;  void setOutputFormat (QString outputFormat);

 qlonglong getType() const
;  void setType (qlonglong type);


  virtual TopatsItemcatsGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 一级类目ID列表（非一级类目将会被忽略），用半角逗号(,)分隔，例如:"16,19562"，一次最多可以获取10个类目的增量数据。<span style="color:red">注：传入0代表获取所有类目的数据,默认获取所有类目数据</span>
 **/
  QString cids;

/**
 * @brief 类目数据输出格式，可选值为：csv, json（默认csv格式返回）
 **/
  QString outputFormat;

/**
 * @brief 获取类目的类型：1代表集市、2代表天猫
 **/
  qlonglong type;

};

#endif  /* TOPATSITEMCATSGETREQUEST_H */
